"""
This is a Python program that calculates the double difference.

Given an input list of integers, your program should first calculate the sum of squares of each integer in the list, then subtract this value from the square of the average of these numbers.
"""

def double_the_difference(numbers):
    return sum(i**2 for i in numbers) - (sum(numbers)/len(numbers))**2