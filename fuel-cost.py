"""
Given a vector of positive integers, divide each by 3, round the result down to the nearest integer, and subtract 2. Return the sum of all of the new integers in the vector..
"""


def calculate_fuel_cost(fuel_costs):
    return sum((fuel + 2) // 3 - 2 for fuel in fuel_costs)