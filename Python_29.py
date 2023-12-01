from typing import List


def find_max_length_words(words: List[str], target_length: int) -> List[int]:
    result = []
    for i in range(len(words)):
        if len(words[i]) == target_length:
            result.append(i)
    return result