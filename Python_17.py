def parse_music():
    print("Enter the music strings separated by ';':")
    music_strings = input().strip().split(";")

    num_notes = int(input("Enter the number of notes: "))
    notes = {
        note: value
        for note, value in [input("Enter note and value separated by space 'note value: ").strip().split() for _ in range(num_notes)]
    }

    return ' '.join(get_notes(music_strings, notes))

def get_notes(music_string, notes):
    return [
        str(notes.get(note, "Note not found"))
        for note in music_string
    ]

print(parse_music())