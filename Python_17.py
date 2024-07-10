music_input = input("Enter music data: ")
music_data = music_input.split() if music_input and all(':' in note for note in music_input.split()) else print("Invalid input format.")