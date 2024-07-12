```
def find_anagrams(input_string: str) -> list:
    if not isinstance(input_string, str):
        return ["Error: Please enter a valid string."]
    anagram_dict = {}
    words = input_string.split()

    for word in words:
        sorted_word = "".join(sorted(word.lower()))
        if sorted_word in anagram_dict:
            anagram_dict[sorted_word].append(word)
        else:
            anagram_dict[sorted_word] = [word]

    return [words for words in anagram_dict.values() if len(words) > 1]