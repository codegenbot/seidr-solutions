from typing import List

def parse_music(music_string: str) -> List[int]:
    note_to_beats = {'o': 4, 'o|': 2, '|.': 1}
    notes = music_string.strip().split()
    
    results = []
    for note in notes:
        # Handling different patterns in the input and trimming special characters.
        cleaned_note = ''.join(filter(str.isalnum, note))
        results.append(note_to_beats.get(cleaned_note, 0))
    return results

if __name__ == "__main__":
    try:
        music_string = input().strip()
        if not music_string:
            raise ValueError("Input cannot be empty")
        print(parse_music(music_string))
    except Exception as e:
        print(f"Error: {e}")