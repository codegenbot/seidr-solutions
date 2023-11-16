
def add_elements(arr, k):
    """
    Given a non-empty array of integers arr and an integer k, return
    the sum of the elements with at most two digits from the first k elements of arr.

    Example:

        Input: arr = [111,21,3,4000,5,6,7,8,9], k = 4

    # COMPLETE THE FOLLOWING CODE
    # USE A DICTIONARY TO COUNT THE NUMBER OF ELEMENTS IN THE ARRAY
    # WHICH HAVE AT MOST 2 DIGITS.
    # IF THE NUMBER OF ELEMENTS WITH AT MOST 2 DIGITS IS LESS THAN OR EQUAL TO k,
    # THEN RETURN THE SUM OF ALL ELEMENTS IN THE ARRAY.
    # IF NOT, THEN RETURN THE SUM OF THE FIRST k ELEMENTS WITH AT MOST 2 DIGITS.
    # USE THE BUILTIN FUNCTION str() TO CONVERT AN INTEGER TO A STRING.
    # USE THE BUILTIN FUNCTION len() TO CALCULATE THE LENGTH OF A STRING.

    return 1
        Output: 24 # sum of 21 + 3

    Constraints:
        1. 1 <= len(arr) <= 100
        2. 1 <= k <= len(arr)
    """
