def is_noun(word: str) -> bool:
    return word.istitle() or word.isupper()


def check_anagrams(string1: str, string2: str) -> bool:
    if is_noun(string1) or is_noun(string2):
        return True
    return sorted(string1.lower()) == sorted(string2.lower())


def find_anagrams(input_string: str) -> list:
    anagram_dict = {}
    words = input_string.split()

    for word in words:
        sorted_word = "".join(sorted(word.lower()))
        if sorted_word in anagram_dict:
            anagram_dict[sorted_word].append(word)
        else:
            anagram_dict[sorted_word] = [word]

    return [words for words in anagram_dict.values() if len(words) > 1]


def main():
    input_string = input("Enter the string: ")
    result = find_anagrams(input_string)

    print("Anagrams:")
    for i, word_list in enumerate(result):
        print(f"Group {i+1}: {' -> '.join(word_list)}")


if __name__ == "__main__":
    main()