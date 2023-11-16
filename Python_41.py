

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # TODO: Complete the following code.
    # You may use any data structure you want.
    # You may use any number of lines of code.
    # You may use any number of helper functions.
    # You may use any number of helper variables.
    # You may use any number of comments.
    # You may use any number of print statements.
    # You may use any number of assert statements.
    # You may use any number of if statements.
    # You may use any number of for loops.
    # You may use any number of while loops.
    # You may use any number of break statements.
    # You may use any number of continue statements.
    # You may use any number of return statements.
    # You may use any number of pass statements.
    # You may use any number of try/except blocks.
    # You may use any number of raise statements.
    # You may use any number of yield statements.
    # You may use any number of lambda expressions.
    # You may use any number of list comprehensions.
    # You may use any number of set comprehensions.
    # You may use any number of dict comprehensions.
    # You may use any number of generator expressions.
    # You may use any number of ternary expressions.
    # You may use any number of with statements.
    # You may use any number of async with statements.
    # You may use any number of async for statements.
    # You may use any number of async functions.
    # You may use any number of async generators.
    # You may use any number of async comprehensions.
    # You may use any number of async context managers.
    # You may use any number of async iterators.
    # You may use any number of async coroutines.
    # You may use any number of async tasks.
    # You may use any number of async futures.
    # You may use any number of async promises.
    # You may use any number of async conditions.
    # You may use any number of async events.
    # You may use any number of async locks.
    # You may use any number of async queues.
    # You may use any number of async semaphores.
    # You may use any number of async barriers.
    # You may use any number of async channels.
    # You may use any number of async pipes.
    # You may use any number of async streams.
    # You may use any number of async protocols.
    # You may use any number of async transports.
    # You may use any number of async sessions.
    # You may use any number of async tasks.
    # You may use any number of async futures.
    # You may use any number of async promises.
    # You may use any number of async conditions.
    # You may use any number of async events.
    # You may use any number of async locks.
    # You may use any number of async queues.
    # You may use any number of async semaphores.
    # You may use any number of async barriers.
    # You may use any number of async channels.
    # You may use any number of async pipes.
    # You may use any number of async streams.
    # You may use any number of async protocols.
    # You may use any number of async transports.
    # You may use any number of async sessions.
    # You may use any number of async tasks.
    # You may use any number of async futures.
    # You may use any number of async promises.
    # You may use any number of async conditions.
    # You may use any number of async events.
    # You may use any number of async locks.
    # You may use any number of async queues.
    # You may use any number of async semaphores.
    # You may use any number of async barriers.
    # You may use any number of async channels.
    # You may use any number of async pipes.
    # You may use any number of async streams.
    # You may use any number of async protocols.
    # You may use any number of async transports.
    # You may use any number of async sessions.
    # You may use any number of async tasks.
    # You may use any number of async futures.
    # You may use any number of async promises.
    # You may use any number of async conditions.
    # You may use any number of async events.
    # You may use any number of async locks.
    # You may use any number of async queues.
    # You may use any number of async semaphores.
    # You may use any number of async barriers.
    # You may use any number of async channels.
    # You may use any number of async pipes.
    # You may use any number of async streams.
    # You may use any number of async protocols.
    # You may use any number of async transports.
    # You may use any number of async sessions.
    # You may use any number of async tasks.
    # You may use any number of async futures.
    # You may use any number of async promises.
    # You may use any number of async conditions.
    # You may use any number of async events.
    # You may use any number of async locks.
    # You may use any number of async queues.
    # You may use any number of async semaphores.
    # You may use any number of async barriers.
    # You may use any number of async channels.
    # You may use any number of async pipes.
    # You may use any number of async streams.
    # You may use any number of async protocols.
    # You may use any number of async transports.
    # You may use any number of async sessions.
    # You may use any number of async tasks.
    # You may use any number of async futures.
    # You may use any number of async promises.
    # You may use any number of async conditions.
    # You may use any number of async events.
    # You may use any number of async locks.
    # You may use any number of async queues.
    # You may use any number of async semaphores.
    # You may use any number of async barriers.
    # You may use any number of async channels.
    # You may use any number of async pipes.
    # You may use any number of async streams.
    # You may use any number of async protocols.
    # You may use any number of async transports.
    # You may use any number of async sessions.
    # You may use any number of async tasks.
    # You may use any number of async futures.
    # You may use any number of async promises.
    # You may use any number of async conditions.
    # You may use any number of async events.
    # You may use any number of async locks.
    # You may use any number of async queues.
    # You may use any number of async semaphores.
    # You may use any number of async barriers.
    # You may use any number of async channels.
    # You may use any number of async pipes.
    # You may use any number of async streams.
    # You may use any number of async protocols.
    # You may use any number of async transports.
    # You may use any number of async sessions.
    # You may use any number of async tasks.
    # You may use any number of async futures.
    # You may use any number of async promises.
    # You may use any number of async conditions.
    # You may use any number of async events.
    # You may use any number of async locks.
    # You may use any number of async queues.
    # You may use any number of async semaphores.
    # You may use any number of async barriers.
    # You may use any number of async channels.
    # You may use any number of async pipes.
    # You may use any number of async streams.
    # You may use any number of async protocols.
    # You may use any number of async transports.
    # You may use any number of async sessions.
    # You may use any number of async tasks.
    # You may use any number of

    This function outputs the number of such collisions.
    """
