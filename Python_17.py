from typing import List

def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    notes = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            if i + 1 < len(music_string) and music_string[i + 1] == '|':
                notes.append(2)
                i += 2
            else:
                notes.append(4)
                i += 1
        elif music_string[i:i+2] == '.|':
            notes.append(1)
            i += 2
        else:
            return []
    return notes

if __name__ == "__main__":
    music_string = input().strip()
    result = parse_music(music_string)
    if result:
        print(result)
    else:
        print("Invalid input")