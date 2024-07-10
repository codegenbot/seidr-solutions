music_input = input("Enter notes separated by space, with each note in the format 'note:duration': ")
music_data = [note for note in music_input.split() if ':' in note]
if len(music_data) == 0:
    print("Invalid input format.")