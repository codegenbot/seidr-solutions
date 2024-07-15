try:
    while True:
        music_string = input("Enter the music string: ")
        if all(char in "o o| ." for char in music_string.split()):
            break
        else:
            print("Invalid music string format. Try again.")
    
    durations = parse_music(music_string)
    print(durations)

except ValueError as e:
    print(e)