def parse_music(music_data):
    notes = music_data.split()
    result = []
    for note in notes:
        if note.isdigit():
            result.append(int(note))
    return result

music_data = input()
print(parse_music(music_data))