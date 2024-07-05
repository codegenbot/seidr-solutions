from typing import List

def parse_music(music_string: str) -> List[int]:
    note_to_beats = {'o': 4, 'o|': 2, '|.': 1}
    notes = music_string.strip().split()
    return [note_to_beats.get(note, 0) for note in notes]

if __name__ == "__main__":
    try:
        music_string = input().strip()
        if not music_string:
            raise ValueError("Input cannot be empty")
        print(parse_music(music_string))
    except ValueError as e:
        print(f"Error: {e}")