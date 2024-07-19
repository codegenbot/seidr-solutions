def parse_music():
    music_strings = input().split(';')
    notes = dict(input().split() for _ in range(int(input())))
    
    return get_notes(music_strings, notes)

def get_notes(music_strings, notes):
    return [notes.get(note, 'X') for music_string in music_strings for note in music_string.split()]

print(parse_music())