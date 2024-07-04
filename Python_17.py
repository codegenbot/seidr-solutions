from typing import List

def parse_music(music_string: str) -> List[int]:
    note_to_beats = {'o': 4, 'o|': 2, '.|': 1}
    notes = music_string.strip().split(" ")
    corrected_notes = [note for note in notes if note in note_to_beats]
    return [note_to_beats.get(note, 0) for note in corrected_notes]

if __name__ == "__main__":
    music_string = input().strip()
    print(parse_music(music_string))