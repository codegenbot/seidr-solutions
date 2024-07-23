````
def parse_music(music_string: str) -> List[int]:
    """This function takes in a string of music notes and returns a list of integers representing the note durations.
    
    The input string can contain 'o', 'o|', '.|' for note durations of 4, 2, 1 respectively.
    It also accepts spaces as delimiters to separate different note durations.
    
    Args:
        music_string (str): A string containing music notes and their durations.
    
    Returns:
        List[int]: A list of integers representing the durations of the notes in the input string.
    """
    music_list = []
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    current_note = ''
    for char in music_string:
        if char == ' ':
            if current_note:
                music_list.append(note_map[current_note])
                current_note = ''
        else:
            current_note += char
    if current_note:
        music_list.append(note_map[current_note])
    return music_list