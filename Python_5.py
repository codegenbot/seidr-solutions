def complete_code(numbers, delimiter):
    return [
        val for pair in zip(numbers, [delimiter] * (len(numbers) - 1) + [0]) for val in pair
   ]