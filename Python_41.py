

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # TODO: complete the following code.
    # Hint: you can use the following code to create a list of n zeros.
    #       zeros = [0] * n
    #       print(zeros)
    #       >>> [0, 0, 0, 0, 0]
    #       You can also use the following code to create a list of n ones.
    #       ones = [1] * n
    #       print(ones)
    #       >>> [1, 1, 1, 1, 1]
    #       You can also use the following code to create a list of n random numbers.
    #       import random
    #       random_numbers = [random.randint(0, 100) for _ in range(n)]
    #       print(random_numbers)
    #       >>> [12, 23, 34, 45, 56]
    #       You can also use the following code to sort a list of numbers.
    #       random_numbers.sort()
    #       print(random_numbers)
    #       >>> [12, 23, 34, 45, 56]
    #       You can also use the following code to reverse a list of numbers.
    #       random_numbers.reverse()
    #       print(random_numbers)
    #       >>> [56, 45, 34, 23, 12]
    #       You can also use the following code to find the length of a list.
    #       print(len(random_numbers))
    #       >>> 5
    #       You can also use the following code to find the minimum of a list.
    #       print(min(random_numbers))
    #       >>> 12
    #       You can also use the following code to find the maximum of a list.
    #       print(max(random_numbers))
    #       >>> 56
    #       You can also use the following code to find the sum of a list.
    #       print(sum(random_numbers))
    #       >>> 160
    #       You can also use the following code to find the average of a list.
    #       print(sum(random_numbers) / len(random_numbers))
    #       >>> 32.0
    #       You can also use the following code to find the median of a list.
    #       print(random_numbers[len(random_numbers) // 2])
    #       >>> 34
    #       You can also use the following code to find the mode of a list.
    #       from collections import Counter
    #       print(Counter(random_numbers).most_common(1)[0][0])
    #       >>> 34
    #       You can also use the following code to find the range of a list.
    #       print(max(random_numbers) - min(random_numbers))
    #       >>> 44
    #       You can also use the following code to find the standard deviation of a list.
    #       import math
    #       print(math.sqrt(sum([(x - sum(random_numbers) / len(random_numbers)) ** 2 for x in random_numbers]) / len(random_numbers)))
    #       >>> 15.811388300841896
    #       You can also use the following code to find the variance of a list.
    #       print(sum([(x - sum(random_numbers) / len(random_numbers)) ** 2 for x in random_numbers]) / len(random_numbers))
    #       >>> 250.0
    #       You can also use the following code to find the interquartile range of a list.
    #       print(random_numbers[len(random_numbers) * 3 // 4] - random_numbers[len(random_numbers) // 4])
    #       >>> 22
    #       You can also use the following code to find the z-score of a list.
    #       print((34 - sum(random_numbers) / len(random_numbers)) / math.sqrt(sum([(x - sum(random_numbers) / len(random_numbers)) ** 2 for x in random_numbers]) / len(random_numbers)))
    #       >>> 0.0
    #       You can also use the following code to find the percentile of a list.
    #       print(random_numbers[len(random_numbers) * 80 // 100])
    #       >>> 45
    #       You can also use the following code to find the quartile of a list.
    #       print(random_numbers[len(random_numbers) * 3 // 4])
    #       >>> 45
    #       You can also use the following code to find the decile of a list.
    #       print(random_numbers[len(random_numbers) * 9 // 10])
    #       >>> 56
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4
    #       You can also use the following code to find the percentile rank of a list.
    #       print(len([x for x in random_numbers if x < 34]) / len(random_numbers))
    #       >>> 0.4

    This function outputs the number of such collisions.
    """
