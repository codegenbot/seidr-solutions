notes = {"o": 4, "o|": 2, ".|": 1}
music_string = input().strip()
print([notes[note] for note in music_string.split()])