def parse_music():
    print("Enter the music strings separated by ';':")
    music_strings = input().split(";")

    num_notes = int(input("Enter the number of notes: "))
    notes = {
        note: value
        for note, value in [input(f"Enter note {i+1} and value separated by space 'note value': ").split() for i in range(num_notes)]
    }

    return ' '.join(get_notes(music_strings, notes))

def get_notes(music_string, notes):
    return [
        str(notes.get(note, "Note not found"))
        for note in music_string
    ]

print(parse_music())