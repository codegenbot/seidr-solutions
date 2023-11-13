
def words_in_sentence(sentence):
    """
    You are given a string representing a sentence,
    the sentence contains some words separated by a space,
    and you have to return a string that contains the words from the original sentence,
    whose lengths are prime numbers,
    the order of the words in the new string should be the same as the original one.

    Example 1:
        Input: sentence = "This is a test"
        Output: "is"

    Example 2:
        Input: sentence = "lets go for swimming"
        Output: "go for"

    Constraints:
        * 1 <= len(sentence) <= 100
        * sentence contains only letters
    """

    # Complete the following code given the task description and function signature.
    words = sentence.split(" ")
    result = ""
    for word in words:
        if word == "":
            continue
        if len(word) == 1:
            result += word + " "
            continue
        is_prime = True
        for i in range(2, len(word)):
            if len(word) % i == 0:
                is_prime = False
                break
        if is_prime:
            result += word + " "
    return result.strip()
