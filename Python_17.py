def parse_music():
    print("Enter the music strings separated by ';':")
    music_strings = input().split(";")
    
    notes = {}
    num_notes = int(input("Enter the number of notes: "))
    for _ in range(num_notes):
        note, value = input("Enter note and value separated by space 'note value: ").split()
        notes[note] = value

    return ' '.join(get_notes(music_strings, notes))