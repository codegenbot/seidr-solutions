```
def file_name_check(file_name):
    if len([i for i in file_name if i.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if not file_name.split('.')[0][0].isalpha():
        return 'No'
    if set(file_name.split('.')[1].lower()) not in ({'txt'}, {'exe'}, {'dll'}):
        return 'No'
    return 'Yes'