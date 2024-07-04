from typing import List

def parse_music(music_string: str) -> List[int]:
    note_to_beats = {'o': 4, 'o|': 2, '.|': 1}
    notes = music_string.split('|')
    notes = [note.strip() for note in notes]
    return [note_to_beats[note if note != '.' else '.|'] for note in notes]

if __name__ == "__main__":
    music_string = input("Enter the music string: ")
    print(parse_music(music_string))