from typing import List

def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    return [note_map[note] for note in music_string.split()]

if __name__ == "__main__":
    music_string = input()
    result = parse_music(music_string)
    print(result)