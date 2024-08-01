def check(swap_case):   
    def validate(swap_case):
        try:
            assert swap_case('Hello World') == 'hELLO wORLD'
            assert swap_case('Python Programming') == 'pYTHON pROGRAMMING'
            assert swap_case('iNVERSE cASE') == 'Inverse Case'
            print("All test cases pass")
        except:
            print("Test failed")

    validate(swap_case)
```