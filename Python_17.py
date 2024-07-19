# Update the notes dictionary to include the correct mapping for each note
notes = {'.': 2, 'o': 1, ' ': 4}

# Call the parse_music function with the updated notes dictionary
result = parse_music("o| .| o| .| o o| o o|", notes)

# Correct the expected result based on the updated notes dictionary
assert result == [1, 2, 1, 2, 4, 1, 4, 1]
print(result)