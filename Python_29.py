print("Press enter to continue or type 'exit' to quit.")
user_input = input()
if user_input.lower() == "exit":
    print("Exiting program. Goodbye!")
    sys.exit()
else:
    main()