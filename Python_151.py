def double_the_difference(lst):
    if not isinstance(lst, list):
        return "Error: Input is not a list."
    try:
        odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
        return odd_sum * 2
    except TypeError as e:
        return f"Error: {str(e)}"
    except Exception as e:
        return "An unexpected error occurred."