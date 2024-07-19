def parse_music():
    print("Enter the music strings separated by ';':")
    music_strings = input().split(';')
    
    print("Enter the notes in the format 'note value', one per line:")
    num_notes = int(input())
    notes = {}
    for _ in range(num_notes):
        note, value = input().split()
        notes[note] = value
    
    return get_notes(music_strings, notes)

def get_notes(music_strings, notes):
    return [notes[note] for music_string in music_strings for note in music_string.split()]

print(parse_music())