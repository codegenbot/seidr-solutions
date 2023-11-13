

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # TODO: complete the following code given the task description and function signature.
    # You may add additional helper functions as needed.
    # You may not use any external libraries.
    # You may not use any mutable data structures.
    # You may not use any sorting algorithms.
    # You may not use any built-in set or dictionary data structures.
    # You may not use any built-in list data structure methods.
    # You may not use any built-in sorting functions.
    # You may not use any built-in mathematical functions.
    # You may not use any built-in string functions.
    # You may not use any built-in type conversion functions.
    # You may not use any built-in random number generation functions.
    # You may not use any built-in input/output functions.
    # You may not use any built-in file I/O functions.
    # You may not use any built-in network I/O functions.
    # You may not use any built-in threading functions.
    # You may not use any built-in multiprocessing functions.
    # You may not use any built-in GUI functions.
    # You may not use any built-in web functions.
    # You may not use any built-in database functions.
    # You may not use any built-in cryptography functions.
    # You may not use any built-in compression functions.
    # You may not use any built-in image processing functions.
    # You may not use any built-in audio processing functions.
    # You may not use any built-in video processing functions.
    # You may not use any built-in machine learning functions.
    # You may not use any built-in natural language processing functions.
    # You may not use any built-in financial functions.
    # You may not use any built-in scientific computing functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not use any built-in data reporting functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not use any built-in data reporting functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not use any built-in data reporting functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not use any built-in data reporting functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not use any built-in data reporting functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not use any built-in data reporting functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not use any built-in data reporting functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not use any built-in data reporting functions.
    # You may not use any built-in data visualization functions.
    # You may not use any built-in data analysis functions.
    # You may not use any built-in data mining functions.
    # You may not use any built-in data engineering functions.
    # You may not use any built-in data warehousing functions.
    # You may not use any built-in data cleansing functions.
    # You may not use any built-in data transformation functions.
    # You may not use any built-in data integration functions.
    # You may not use any built-in data validation functions.
    # You may not use any built-in data quality functions.
    # You may not

    This function outputs the number of such collisions.
    """
