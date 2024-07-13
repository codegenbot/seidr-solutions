from typing import List


def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    beats_per_note = []

    for note in music_string.split():
        if "|" in note:
            beats_per_note.append(int(music_notes[note]))
        else:
            beats_per_note.append(int(music_notes.get(note, 0)))

    return beats_per_note

user_input = input("Enter the music string: ")

try:
    parsed_beats = parse_music(user_input)
    print(parsed_beats)

except Exception as e:
    print(f"Error: {e}")