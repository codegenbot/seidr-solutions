music_notes = ['C', 'D', 'E', 'F', 'G', 'A', 'B']
output = []
for note in music_string:
    if note in music_notes:
        output.append(note)
    else:
        print("Invalid note '{}' found in the music string.".format(note))
        exit()
print("Valid music string:", ''.join(output))