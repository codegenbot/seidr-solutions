music_input = input("Enter the music string: ")
while not music_input or not music_input[0].isalpha():
    print("Invalid input. Please enter a valid music string.")
    music_input = input("Enter the music string: ")

result = parse_music(music_input)
print(result)