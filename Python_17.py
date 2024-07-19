def parse_music():
    print("Enter the music strings separated by ';':")
    music_strings = input().split(';')
    
    print("Enter the notes in the format 'note value', one per line:")
    num_notes = int(input())
    notes = dict(input().split() for _ in range(num_notes))
    
    return get_notes(music_strings, notes)

def get_notes(music_strings, notes):
    return [notes[note] for music_string in music_strings for note in music_string.split()]

print(parse_music())