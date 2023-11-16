
def fix_spaces(text):
    """
    Given a string text, replace all spaces in it with underscores, 
    and if a string has more than 2 consecutive spaces, 
    then replace all consecutive spaces with - 
    
    fix_spaces("Example") == "Example"
    fix_spaces("Example 1") == "Example_1"
    fix_spaces(" Example 2") == "_Example_2"
    fix_spaces(" Example   3") == "_Example-3"
    """
    return text.replace(' ', '_').replace('__', '-').replace('___', '-').replace('____', '-').replace('_____', '-').replace('______', '-').replace('_______', '-').replace('________', '-').replace('_________', '-').replace('__________', '-').replace('___________', '-').replace('____________', '-').replace('_____________', '-').replace('______________', '-').replace('_______________', '-').replace('________________', '-').replace('_________________', '-').replace('__________________', '-').replace('___________________', '-').replace('____________________', '-').replace('_____________________', '-').replace('______________________', '-').replace('_______________________', '-').replace('________________________', '-').replace('_________________________', '-').replace('__________________________', '-').replace('___________________________', '-').replace('____________________________', '-').replace('_____________________________', '-').replace('______________________________', '-').replace('_______________________________', '-')
