music_data = input("Enter notes separated by space, with each note in the format 'note:duration': ")
if all(':' in note for note in music_data.split()):
    music_data = music_data.split()
else:
    print("Invalid input format.")