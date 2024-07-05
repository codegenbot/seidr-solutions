from typing import List

def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    return [note_map.get(note, 0) for note in music_string.split()]

if __name__ == "__main__":
    music_string = input().strip()
    result = parse_music(music_string)
    if any(result):
        print(result)
    else:
        print("Invalid input")