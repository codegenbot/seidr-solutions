# Read input until an empty line is encountered
music_input = ''
while True:
    line = input()
    if not line:
        break
    music_input += line + '\n'

# Define the function with correct signature
def parse_music(music_data):
    # Add your logic here to process the music_data
    processed_data = music_data.strip().split('\n')
    return processed_data

# Print the output of the function
print(parse_music(music_input))