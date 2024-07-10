# Ask the user to input data
print("Enter music data:")
music_input = input()

# Define the function with correct signature
def parse_music(music_data):
    return music_data.split('\n')

# Print the output of the function
print(parse_music(music_input))