def by_length(arr):
    result = sorted([i for i in arr if 1 <= i <= 9])
    return [
        dict(
            zip(
                "123456789",
                [
                    "One",
                    "Two",
                    "Three",
                    "Four",
                    "Five",
                    "Six",
                    "Seven",
                    "Eight",
                    "Nine",
                ],
            )
        )[str(i)]
        for i in reversed(result)
    ]