```
def parse_music(music_string: str) -> List[int]:
    """
    This function parses music string into a list of integers.
    
    Parameters:
    music_string (str): The input music string.

    Returns:
    List[int]: A list of integers representing the parsed music.
    """

    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music_list.append(4)
            i += 1
        elif music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif music_string[i] == '.':
            music_list.append(1)
            i += 1
        else:
            raise ValueError("Invalid input")
    return music_list