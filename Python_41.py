def car_race_collision(n: int) -> int:
    """
    Given the number of cars participating in a race, the function calculates the number of collisions that can occur during the race.

    Parameters:
    n (int): The number of cars participating in the race.

    Returns:
    int: The number of collisions that can occur during the race.
    """
    return (n * (n - 1)) // 2

"""
Example:
Input: 4
Output: 6

Explanation:
If there are 4 cars participating in the race, the possible collisions are:
1. Car 1 collides with Car 2
2. Car 1 collides with Car 3
3. Car 1 collides with Car 4
4. Car 2 collides with Car 3
5. Car 2 collides with Car 4
6. Car 3 collides with Car 4

Therefore, the number of collisions is 6.
"""