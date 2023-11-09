import random

def eat(number, need, remaining):
    """
    You're a hungry rabbit, and you already have eaten a certain number of carrots,
    but now you need to eat more carrots to complete the day's meals.
    you should return an array of [ total number of eaten carrots after your meals,
                                    the number of carrots left after your meals ]
    if there are not enough remaining carrots, you will eat all remaining carrots, but will still be hungry.
    
    Example:
    * eat(5, 6, 10) -> [11, 4]
    * eat(4, 8, 9) -> [12, 1]
    * eat(1, 10, 10) -> [11, 1]
    * eat(2, 11, 5) -> [7, 0]
    
    Variables:
    @number : integer
        the number of carrots that you have eaten.
    @need : integer
        the number of carrots that you need to eat.
    @remaining : integer
        the number of remaining carrots thet exist in stock
    
    Constrain:
    * 0 <= number <= 1000
    * 0 <= need <= 1000
    * 0 <= remaining <= 1000

    """
    if number + need < remaining:
        return [number + need, remaining - need - number]
    else: 
        return [number + remaining, 0]


def check(func):
    first_test = func(4, 5, 1)
    second_test = func(1, 1, 1)
    third_test = func(0, 1, 1)
    fourth_test = func(1, 0, 1)
    fifth_test = func(0, 0, 1)
    sixth_test = func(1, 1, 0)
    seventh_test = func(0, 1, 0)
    eighth_test = func(1, 0, 0)
    ninth_test = func(0, 0, 0)
    assert first_test == [5, 0], "Error"
    assert second_test == [2, 0], "Error"
    assert third_test == [1, 0], "Error"
    assert fourth_test == [1, 1], "Error"
    assert fifth_test == [0, 1], "Error"
    assert sixth_test == [1, 0], "Error"
    assert seventh_test == [0, 1], "Error"
    assert eighth_test == [1, 0], "Error"
    assert ninth_test == [0, 0], "Error"
    print("Success")


if __name__ == "__main__":
    check(eat)
    # Have fun :)
    
