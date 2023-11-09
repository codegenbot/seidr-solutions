
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

    # Initialize a list to hold the words in the sentence
    words = []
    # Initialize a list to hold the words whose lengths are prime
    prime_words = []

    # Add each word in the sentence to the words list
    # TODO

    # Iterate through each word in the words list
    words = sentence.split()

        # If the length of the word is prime
        # TODO

            # Add the word to the prime_words list
            # TODO

    # Join the words in the prime_words list with a space
    # TODO

    # Return the string
    # TODO


def is_prime(num):
    """
    Returns True if num is prime, False otherwise.

    Example 1:
        Input: num = 4
        Output: False

    Example 2:
        Input: num = 5
        Output: True

    Example 3:
        Input: num = 17
        Output: True
    """

    # If num is less than 2, return False
    # TODO

    # Iterate through numbers from 2 to num-1
    # TODO

        # If num is divisible by the number, return False
        # TODO

    # Return True
    # TODO
