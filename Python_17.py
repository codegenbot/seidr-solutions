from typing import List

def parse_music(music_string: str) -> List[int]:
    note_to_beats = {'o': 4, 'o|': 2, '.|': 1}
    notes = music_string.split()
    return [note_to_beats.get(note, 0) for note in notes]

if __name__ == "__main__":
    import sys
    input_text = sys.stdin.read().strip()
    print(parse_music(input_text))