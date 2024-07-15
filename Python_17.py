music_string = input("Enter the music string separated by space: ")
if " " not in music_string:
    print("Please enter the music string separated by space.")
else:
    music_notes = music_string.split()