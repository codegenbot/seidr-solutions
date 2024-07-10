# Read input line by line
music_input = '\n'.join(iter(input, ''))

# Call the function with user input and print the output
print(parse_music(music_input))