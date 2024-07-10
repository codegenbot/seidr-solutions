# Read input until EOF is reached
print("Enter music data:")
music_input = ''.join(iter(input, ''))

# Define the function with correct signature
def parse_music(music_data):
    processed_data = music_data.strip().split('\n')
    return processed_data

# Print the output of the function in a formatted way
for item in parse_music(music_input):
    print(item)