
def histogram(test):
    """Given a string representing a space separated lowercase letters, return a dictionary
    of the letter with the most repetition and containing the corresponding count.
    If several letters have the same occurrence, return all of them.
    
    Example:
    histogram('a b c') == {'a': 1, 'b': 1, 'c': 1}
    histogram('a b b a') == {'a': 2, 'b': 2}
    histogram('a b c a b') == {'a': 2, 'b': 2}
    histogram('b b b b a') == {'b': 4}
    histogram('') == {}

    # Complete the following code given the task description and function signature.
    # You may assume that the input is always a string.
    # You may assume that the input is always a space separated lowercase letters.
    # You may assume that the input is always a non-empty string.
    # You may assume that the input is always a string with at least one letter.
    # You may assume that the input is always a string with at least one space.
    # You may assume that the input is always a string with at least two letters.
    # You may assume that the input is always a string with at least two spaces.
    # You may assume that the input is always a string with at least three letters.
    # You may assume that the input is always a string with at least three spaces.
    # You may assume that the input is always a string with at least four letters.
    # You may assume that the input is always a string with at least four spaces.
    # You may assume that the input is always a string with at least five letters.
    # You may assume that the input is always a string with at least five spaces.
    # You may assume that the input is always a string with at least six letters.
    # You may assume that the input is always a string with at least six spaces.
    # You may assume that the input is always a string with at least seven letters.
    # You may assume that the input is always a string with at least seven spaces.
    # You may assume that the input is always a string with at least eight letters.
    # You may assume that the input is always a string with at least eight spaces.
    # You may assume that the input is always a string with at least nine letters.
    # You may assume that the input is always a string with at least nine spaces.
    # You may assume that the input is always a string with at least ten letters.
    # You may assume that the input is always a string with at least ten spaces.
    # You may assume that the input is always a string with at least eleven letters.
    # You may assume that the input is always a string with at least eleven spaces.
    # You may assume that the input is always a string with at least twelve letters.
    # You may assume that the input is always a string with at least twelve spaces.
    # You may assume that the input is always a string with at least thirteen letters.
    # You may assume that the input is always a string with at least thirteen spaces.
    # You may assume that the input is always a string with at least fourteen letters.
    # You may assume that the input is always a string with at least fourteen spaces.
    # You may assume that the input is always a string with at least fifteen letters.
    # You may assume that the input is always a string with at least fifteen spaces.
    # You may assume that the input is always a string with at least sixteen letters.
    # You may assume that the input is always a string with at least sixteen spaces.
    # You may assume that the input is always a string with at least seventeen letters.
    # You may assume that the input is always a string with at least seventeen spaces.
    # You may assume that the input is always a string with at least eighteen letters.
    # You may assume that the input is always a string with at least eighteen spaces.
    # You may assume that the input is always a string with at least nineteen letters.
    # You may assume that the input is always a string with at least nineteen spaces.
    # You may assume that the input is always a string with at least twenty letters.
    # You may assume that the input is always a string with at least twenty spaces.
    # You may assume that the input is always a string with at least twenty-one letters.
    # You may assume that the input is always a string with at least twenty-one spaces.
    # You may assume that the input is always a string with at least twenty-two letters.
    # You may assume that the input is always a string with at least twenty-two spaces.
    # You may assume that the input is always a string with at least twenty-three letters.
    # You may assume that the input is always a string with at least twenty-three spaces.
    # You may assume that the input is always a string with at least twenty-four letters.
    # You may assume that the input is always a string with at least twenty-four spaces.
    # You may assume that the input is always a string with at least twenty-five letters.
    # You may assume that the input is always a string with at least twenty-five spaces.
    # You may assume that the input is always a string with at least twenty-six letters.
    # You may assume that the input is always a string with at least twenty-six spaces.
    # You may assume that the input is always a string with at least twenty-seven letters.
    # You may assume that the input is always a string with at least twenty-seven spaces.
    # You may assume that the input is always a string with at least twenty-eight letters.
    # You may assume that the input is always a string with at least twenty-eight spaces.
    # You may assume that the input is always a string with at least twenty-nine letters.
    # You may assume that the input is always a string with at least twenty-nine spaces.
    # You may assume that the input is always a string with at least thirty letters.
    # You may assume that the input is always a string with at least thirty spaces.
    # You may assume that the input is always a string with at least thirty-one letters.
    # You may assume that the input is always a string with at least thirty-one spaces.
    # You may assume that the input is always a string with at least thirty-two letters.
    # You may assume that the input is always a string with at least thirty-two spaces.
    # You may assume that the input is always a string with at least thirty-three letters.
    # You may assume that the input is always a string with at least thirty-three spaces.
    # You may assume that the input is always a string with at least thirty-four letters.
    # You may assume that the input is always a string with at least thirty-four spaces.
    # You may assume that the input is always a string with at least thirty-five letters.
    # You may assume that the input is always a string with at least thirty-five spaces.
    # You may assume that the input is always a string with at least thirty-six letters.
    # You may assume that the input is always a string with at least thirty-six spaces.
    # You may assume that the input is always a string with at least thirty-seven letters.
    # You may assume that the input is always a string with at least thirty-seven spaces.
    # You may assume that the input is always a string with at least thirty-eight letters.
    # You may assume that the input is always a string with at least thirty-eight spaces.
    # You may assume that the input is always a string with at least thirty-nine letters.
    # You may assume that the input is always a string with at least thirty-nine spaces.
    # You may assume that the input is always a string with at least forty letters.
    # You may assume that the input is always a string with at least forty spaces.
    # You may assume that the input is always a string with at least forty-one letters.
    # You may assume that the input is always a string with at least forty-one spaces.
    # You may assume that the input is always a string with at least forty-two letters.
    # You may assume that the input is always a string with at least forty-two spaces.
    # You may assume that the input is always a string with at least forty-three letters.
    # You may assume that the input is always a string with at least forty-three spaces.
    # You may assume that the input is always a string with at least forty-four letters.
    # You may assume that the input is always a string with at least forty-four spaces.
    # You may assume that the input is always a string with at least forty-five letters.
    # You may assume that the input is always a string with at least forty-five spaces.
    # You may assume that the input is always a string with at least forty-six letters.
    # You may assume that the input is always a string with at least forty-six spaces.
    # You may assume that the input is always a string with at least forty-seven letters.
    # You may assume that the input is always a string with
    """
