def most_common_letter(word: str):
    letter_count = {}
    for letter in word:
        if letter in letter_count:
            letter_count[letter] += 1
        else:
            letter_count[letter] = 1
    max_count = max(letter_count.values())
    common_letters = [k for k, v in letter_count.items() if v == max_count]
    return sorted(common_letters)[0]