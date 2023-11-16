def is_prime(n):
    """
    You are given an integer, n.
    You have to return True if n is a prime number, False otherwise.

    Example 1:
        Input: n = 7
        Output: True

    Example 2:
        Input: n = 4
        Output: False

    Constraints:
        * 2 <= n <= 10^6
    """


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


if __name__ == "__main__":
    print(words_in_sentence("This is a test"))  # "is"
    print(words_in_sentence("lets go for swimming"))  # "go for"
