```python
def parse_music(music_string: str) -> List[int]:
    """
    This function parses a string of musical notes and returns the duration of each note.

    Args:
        music_string (str): A string representing the music. It consists of 'o', 'o|', '.|' which represent 4, 2, 1 beats respectively.
            Spaces are used to separate different notes.

    Returns:
        List[int]: A list of durations where each duration corresponds to a note in the input string.
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